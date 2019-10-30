#ifndef TRAINING_TREE_I_TRAINING_NODE_HPP_
#define TRAINING_TREE_I_TRAINING_NODE_HPP_

namespace training_tree {

class ITrainingNode {
public:
  virtual bool HasDependencies() const = 0;
  virtual void AddDependency(const ITrainingNode& node) = 0;

  //TODO: find a way to pass iterators to this function
  virtual bool HasOtherDependencies() const = 0;
};

} // namespace training_tree

#endif // TRAINING_TREE_I_TRAINING_NODE_HPP_
