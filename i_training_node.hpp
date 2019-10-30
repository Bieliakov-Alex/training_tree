#ifndef TRAINING_TREE_I_TRAINING_NODE_HPP_
#define TRAINING_TREE_I_TRAINING_NODE_HPP_

namespace training_tree {

template <typename Iterator> class ITrainingNode {
public:
  virtual bool HasDependencies() const = 0;
  virtual void AddDependency(const ITrainingNode &) = 0;
  virtual bool HasOtherDependencies(Iterator, Iterator) const = 0;
};

} // namespace training_tree

#endif // TRAINING_TREE_I_TRAINING_NODE_HPP_
