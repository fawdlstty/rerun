// DO NOT EDIT! This file was auto-generated by crates/build/re_types_builder/src/codegen/cpp/mod.rs
// Based on "crates/store/re_types/definitions/rerun/blueprint/components/column_selection_mode.fbs".

#pragma once

#include "../../result.hpp"

#include <cstdint>
#include <memory>

namespace arrow {
    /// \private
    template <typename T>
    class NumericBuilder;

    class Array;
    class DataType;
    class UInt8Type;
    using UInt8Builder = NumericBuilder<UInt8Type>;
} // namespace arrow

namespace rerun::blueprint::components {
    /// **Component**: How are columns selected in the dataframe view?
    enum class ColumnSelectionMode : uint8_t {

        /// Show all columns returned by the query.
        All = 1,

        /// Show only the columns specified by the user.
        Selected = 2,
    };
} // namespace rerun::blueprint::components

namespace rerun {
    template <typename T>
    struct Loggable;

    /// \private
    template <>
    struct Loggable<blueprint::components::ColumnSelectionMode> {
        static constexpr const char Name[] = "rerun.blueprint.components.ColumnSelectionMode";

        /// Returns the arrow data type this type corresponds to.
        static const std::shared_ptr<arrow::DataType>& arrow_datatype();

        /// Serializes an array of `rerun::blueprint:: components::ColumnSelectionMode` into an arrow array.
        static Result<std::shared_ptr<arrow::Array>> to_arrow(
            const blueprint::components::ColumnSelectionMode* instances, size_t num_instances
        );

        /// Fills an arrow array builder with an array of this type.
        static rerun::Error fill_arrow_array_builder(
            arrow::UInt8Builder* builder,
            const blueprint::components::ColumnSelectionMode* elements, size_t num_elements
        );
    };
} // namespace rerun