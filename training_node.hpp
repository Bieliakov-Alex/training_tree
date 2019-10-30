#ifndef TRAINING_TREE_TRAINING_NODE_HPP_
#define TRAINING_TREE_TRAINING_NODE_HPP_

#include <set>
#include <string>

#include "i_training_node.hpp"

namespace training_tree {

template <typename Iterator>
class TrainingNode : public ITrainingNode<Iterator> {
public:
  explicit TrainingNode(const std::string &);
  std::string GetTrainingNodeName() const;
  bool HasDependencies() const override;
  void AddDependency(const ITrainingNode<Iterator> &) override;
  bool HasOtherDependencies(Iterator, Iterator) const override;

private:
  std::string training_node_name_;
  std::set<ITrainingNode<Iterator>> dependencies_;
};

} // namespace training_tree

#endif // TRAINING_TREE_TRAINING_NODE_HPP_
