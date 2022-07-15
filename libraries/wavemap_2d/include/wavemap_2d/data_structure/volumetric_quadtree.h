#ifndef WAVEMAP_2D_DATA_STRUCTURE_VOLUMETRIC_QUADTREE_H_
#define WAVEMAP_2D_DATA_STRUCTURE_VOLUMETRIC_QUADTREE_H_

#include <wavemap_common/data_structure/volumetric/volumetric_ndtree.h>

#include "wavemap_2d/data_structure/volumetric_quadtree_interface.h"

namespace wavemap {
template <typename CellT>
class VolumetricQuadtree : public VolumetricNdtree<CellT, 2>,
                           public VolumetricQuadtreeInterface {
 public:
  using VolumetricNdtree<CellT, 2>::VolumetricNdtree;

  cv::Mat getImage(bool /* use_color */) const override {
    // TODO(victorr): Implement this
    return {};
  }
};
}  // namespace wavemap

#endif  // WAVEMAP_2D_DATA_STRUCTURE_VOLUMETRIC_QUADTREE_H_
