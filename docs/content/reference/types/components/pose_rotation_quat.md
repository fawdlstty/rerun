---
title: "PoseRotationQuat"
---
<!-- DO NOT EDIT! This file was auto-generated by crates/build/re_types_builder/src/codegen/docs/mod.rs -->

A 3D rotation expressed as a quaternion that doesn't propagate in the transform hierarchy.

Note: although the x,y,z,w components of the quaternion will be passed through to the
datastore as provided, when used in the Viewer, quaternions will always be normalized.

## Fields

* quaternion: [`Quaternion`](../datatypes/quaternion.md)

## API reference links
 * 🌊 [C++ API docs for `PoseRotationQuat`](https://ref.rerun.io/docs/cpp/stable/structrerun_1_1components_1_1PoseRotationQuat.html?speculative-link)
 * 🐍 [Python API docs for `PoseRotationQuat`](https://ref.rerun.io/docs/python/stable/common/components?speculative-link#rerun.components.PoseRotationQuat)
 * 🦀 [Rust API docs for `PoseRotationQuat`](https://docs.rs/rerun/latest/rerun/components/struct.PoseRotationQuat.html?speculative-link)


## Used by

* [`Boxes3D`](../archetypes/boxes3d.md)
* [`Ellipsoids3D`](../archetypes/ellipsoids3d.md?speculative-link)
* [`InstancePoses3D`](../archetypes/instance_poses3d.md)