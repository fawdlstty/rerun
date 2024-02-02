// DO NOT EDIT! This file was auto-generated by crates/re_types_builder/src/codegen/cpp/mod.rs
// Based on "crates/re_types/definitions/rerun/components/texcoord2d.fbs".

#include "texcoord2d.hpp"

#include "../datatypes/vec2d.hpp"

#include <arrow/builder.h>
#include <arrow/type_fwd.h>

namespace rerun::components {}

namespace rerun {
    const std::shared_ptr<arrow::DataType>& Loggable<components::Texcoord2D>::arrow_datatype() {
        static const auto datatype = Loggable<rerun::datatypes::Vec2D>::arrow_datatype();
        return datatype;
    }

    rerun::Error Loggable<components::Texcoord2D>::fill_arrow_array_builder(
        arrow::FixedSizeListBuilder* builder, const components::Texcoord2D* elements,
        size_t num_elements
    ) {
        static_assert(sizeof(rerun::datatypes::Vec2D) == sizeof(components::Texcoord2D));
        RR_RETURN_NOT_OK(Loggable<rerun::datatypes::Vec2D>::fill_arrow_array_builder(
            builder,
            reinterpret_cast<const rerun::datatypes::Vec2D*>(elements),
            num_elements
        ));

        return Error::ok();
    }

    Result<std::shared_ptr<arrow::Array>> Loggable<components::Texcoord2D>::to_arrow(
        const components::Texcoord2D* instances, size_t num_instances
    ) {
        // TODO(andreas): Allow configuring the memory pool.
        arrow::MemoryPool* pool = arrow::default_memory_pool();
        auto datatype = arrow_datatype();

        ARROW_ASSIGN_OR_RAISE(auto builder, arrow::MakeBuilder(datatype, pool))
        if (instances && num_instances > 0) {
            RR_RETURN_NOT_OK(Loggable<components::Texcoord2D>::fill_arrow_array_builder(
                static_cast<arrow::FixedSizeListBuilder*>(builder.get()),
                instances,
                num_instances
            ));
        }
        std::shared_ptr<arrow::Array> array;
        ARROW_RETURN_NOT_OK(builder->Finish(&array));
        return array;
    }
} // namespace rerun