#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to traverse and print the linked list
void linkedListTraversal(struct Node* ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Function to add a node at the end of the linked list
void addAtEnd(struct Node* head, struct Node* newNode) {
    // If the list is empty, make newNode the head
    if (head == NULL) {
        head = newNode;
        return;
    }

    // Traverse to the last node
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Link the new node at the end
    current->next = newNode;
    newNode->next = NULL;
}

int main() {
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    struct Node *fourth = NULL;

    // Allocate memory in heap and check for allocation failure
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    if (head == NULL || second == NULL || third == NULL || fourth == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize the nodes
    head->data = 7;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 99;
    third->next = NULL;

    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before adding new node:\n");
    linkedListTraversal(head);

    // Add the fourth node at the end
    addAtEnd(head, fourth);

    printf("\nLinked list after adding new node:\n");
    linkedListTraversal(head);

    // Free allocated memory (optional but good practice)
    free(head);
    free(second);
    free(third);
    free(fourth);

    return 0;
}