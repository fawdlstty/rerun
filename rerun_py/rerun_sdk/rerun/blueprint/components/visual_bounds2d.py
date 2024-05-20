# DO NOT EDIT! This file was auto-generated by crates/re_types_builder/src/codegen/python/mod.rs
# Based on "crates/re_types/definitions/rerun/blueprint/components/visual_bounds2d.fbs".

# You can extend this class by creating a "VisualBounds2DExt" class in "visual_bounds2d_ext.py".

from __future__ import annotations

from ... import datatypes
from ..._baseclasses import ComponentBatchMixin
from .visual_bounds2d_ext import VisualBounds2DExt

__all__ = ["VisualBounds2D", "VisualBounds2DBatch", "VisualBounds2DType"]


class VisualBounds2D(VisualBounds2DExt, datatypes.Range2D):
    """**Component**: Visual bounds in 2D space used for `Spatial2DView`."""

    # __init__ can be found in visual_bounds2d_ext.py

    # Note: there are no fields here because VisualBounds2D delegates to datatypes.Range2D
    pass


class VisualBounds2DType(datatypes.Range2DType):
    _TYPE_NAME: str = "rerun.blueprint.components.VisualBounds2D"


class VisualBounds2DBatch(datatypes.Range2DBatch, ComponentBatchMixin):
    _ARROW_TYPE = VisualBounds2DType()