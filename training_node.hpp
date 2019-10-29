#ifndef TRAINING_TREE_TRAINING_NODE_HPP_
#define TRAINING_TREE_TRAINING_NODE_HPP_

#include <memory>
#include <vector>

#include "i_training_node.hpp"

class TrainingNode : public ITrainingNode {
public:
  std::shared_ptr<std::vector<ITrainingNode>> Ancestors();
  std::shared_ptr<std::vector<ITrainingNode>> Descendants();

private:
  std::shared_ptr<std::vector<ITrainingNode>> ancestors_;
  std::shared_ptr<std::vector<ITrainingNode>> descendants_;
};

#endif // TRAINING_TREE_TRAINING_NODE_HPP_
