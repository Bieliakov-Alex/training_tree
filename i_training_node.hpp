#ifndef TRAINING_TREE_I_TRAINING_NODE_HPP_
#define TRAINING_TREE_I_TRAINING_NODE_HPP_

#include <memory>
#include <vector>

class ITrainingNode {
public:
  std::shared_ptr<std::vector<ITrainingNode>> Ancestors();
  std::shared_ptr<std::vector<ITrainingNode>> Descendants();
};

#endif // TRAINING_TREE_I_TRAINING_NODE_HPP_
