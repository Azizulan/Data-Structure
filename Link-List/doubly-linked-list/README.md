
# Doubly-Linked List Data Structure

A doubly-linked list is a fundamental data structure in computer science. It consists of a sequence of elements, each of which contains a data element and two pointers, one pointing to the previous element and one pointing to the next element.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Methods](#methods)
- [Contributing](#contributing)
- [License](#license)

## Introduction

This repository contains a C implementation of a doubly-linked list data structure. The purpose of this data structure is to provide a flexible way of storing and manipulating a collection of data elements. It allows for efficient insertion and deletion at both the head and tail of the list, as well as at arbitrary positions within the list.

## Features

- Doubly-linked list structure.
- Efficient insertion and deletion at the head, tail, and arbitrary positions.
- Support for traversing the list in both forward and reverse directions.
- Example code demonstrating how to use the doubly-linked list.

## Usage

To use the doubly-linked list in your C program, follow these steps:

1. Clone this repository to your local machine.

```bash
git clone https://github.com/Azizulan/Data-Structure
```

2. Include the `doubly_linked_list.h` header file in your C code:

```c
#include "doubly_linked_list.h"
```

3. Use the provided methods to interact with the doubly-linked list. For example:

```c
node *list = NULL;
list = insert_head(list, 42);
list = insert_tail(list, 10);
// Perform other operations on the list
```

## Methods

The following methods are available for working with the doubly-linked list:

- `node* insert_head(node* head, int value)`: Inserts a new node with the given value at the head of the list.

- `node* insert_tail(node* head, int value)`: Inserts a new node with the given value at the tail of the list.

- `node* insert_nth(node* head, int position, int value)`: Inserts a new node with the given value at the specified position.

- `node* delete_head(node* head)`: Deletes the node at the head of the list.

- `node* delete_tail(node* head)`: Deletes the node at the tail of the list.

- `node* delete_nth(node* head, int position)`: Deletes the node at the specified position.

- `void print_list(node* head)`: Prints the elements of the list from head to tail.

- `void print_reverse_list(node* head)`: Prints the elements of the list from tail to head.

## Contributing

Contributions to this project are welcome. If you have any improvements or suggestions, please feel free to create a pull request.

