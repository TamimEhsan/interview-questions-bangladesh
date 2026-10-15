---
description: Model training, evaluation, neural networks, transformers and applied LLM systems — the machine learning section of the interview prep roadmap.
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/notes/roadmap/machine-learning
---
# Machine Learning

*Part of the [Interview Prep Roadmap](./). Coverage ratings are explained there.*

*Optional track — relevant for ML-focused roles.*

Model architecture and transformer internals, then RAG systems and training dynamics through to practical deployment considerations.

*Coverage: thin*

## ML Fundamentals
- Supervised vs. unsupervised learning
- Training, validation, and test splits
- Overfitting and underfitting
- Bias-variance trade-off

**Practice**
- [Supervised, unsupervised and reinforcement learning](/companies/su#q-ml-learning-types) — Sonargaon University
- [Overfitting and bias](/companies/iubat#q-ml-overfitting-bias) — IUBAT
- [Overfitting vs. underfitting, drawn](/companies/gub#q-ml-fitting-curves) — Green University
- [K-means clustering](/companies/sub#q-ml-kmeans) — Stamford University

## Model Training
- Loss functions
- Gradient descent and optimizers
- Learning rate and batch size effects
- Regularization

**Practice**
- [Batch size 8 vs. 64](/companies/therap/ml#q-ml-batch-size) — Therap
- [Training on unshuffled, class-ordered data](/companies/therap/ml#q-ml-unshuffled-classes) — Therap
- [Scheduling models on one GPU](/companies/enosis#q-ml-gpu-scheduling) — Enosis, with answer

## Evaluation
- Accuracy, precision, recall, and F1
- Confusion matrix terms
- Metric selection for imbalanced data
- Cross-validation

**Practice**
- [Read a training/validation curve](/companies/therap/ml#q-ml-training-curves) — Therap
- [Softmax on a multi-label task](/companies/therap/ml#q-ml-softmax-multilabel) — Therap
- [Metrics for a 99/1 imbalanced dataset](/companies/therap/ml#q-ml-imbalanced-metrics) — Therap
- [Build a three-way news classifier](/companies/therap/ml#q-ml-news-classifier) — Therap

## Neural Networks
- Activation functions
- Backpropagation
- Vanishing and exploding gradients
- Residual connections

**Practice**
- [Residual connections and vanishing gradients](/companies/therap/ml#q-ml-residual-connections) — Therap

## Transformers & LLMs
- Attention and query/key/value matrices
- Multi-head attention
- Positional encoding
- Mixture-of-experts routing
- Temperature and sampling parameters

**Practice**
- [Q/K/V and attention matrix shapes](/companies/therap/ml#q-ml-attention-shapes) — Therap
- [Why an argmax MoE router will not train](/companies/therap/ml#q-ml-moe-router) — Therap
- [Temperature when the output must be valid JSON](/companies/therap/ml#q-ml-temperature-json) — Therap

## Applied LLM Systems
- Retrieval-augmented generation
- Chunking and embedding strategies
- Context window management
- Prompt design and few-shot examples

**Practice**
- [Design a RAG system on a small context window](/companies/therap/ml#q-ml-rag-design) — Therap
- [Run inference on 120FPS CCTV footage](/companies/therap/ml#q-ml-cctv-inference) — Therap
- [Discuss a recent ML paper](/companies/therap/ml#q-ml-recent-paper) — Therap
