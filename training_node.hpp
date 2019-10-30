#ifndef TRAINING_TREE_TRAINING_NODE_HPP_
#define TRAINING_TREE_TRAINING_NODE_HPP_

#include "i_training_node.hpp"

namespace training_tree {

class TrainingNode : public ITrainingNode {
public:
  bool HasDependencies() const override;
  void AddDependency(const ITrainingNode &node) override;
  bool HasOtherDependencies() const override;
};

} // namespace training_tree

#endif // TRAINING_TREE_TRAINING_NODE_HPP_
