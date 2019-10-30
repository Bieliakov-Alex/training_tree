#include "training_node.hpp"

namespace training_tree {

template <typename Iterator>
bool TrainingNode<Iterator>::HasDependencies() const {
  // TODO: remove dummy implementation
  return false;
}

template <typename Iterator>
void TrainingNode<Iterator>::AddDependency(
    const ITrainingNode<Iterator> &node) {
  // TODO: remove dummy implementation
  (void)node;
}

template <typename Iterator>
bool TrainingNode<Iterator>::HasOtherDependencies(Iterator begin,
                                                  Iterator end) const {
  // TODO: remove dummy implementation
  (void)begin;
  (void)end;
  return false;
}

template <typename Iterator>
std::string TrainingNode<Iterator>::GetTrainingNodeName() const {
  // TODO: remove dummy implementation
  return "EmptyString";
}

template <typename Iterator>
TrainingNode<Iterator>::TrainingNode(const std::string &name)
    : training_node_name_(name) {
  // TODO: remove dummy implementation
}

} // namespace training_tree
