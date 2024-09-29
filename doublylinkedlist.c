#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        printf("%d inserted into the list.\n", new_data);
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
    printf("%d inserted into the list.\n", new_data);
}

void deleteNode(struct Node** head_ref, int key) {
    if (*head_ref == NULL) {
        printf("List is empty, cannot delete.\n");
        return;
    }

    struct Node* temp = *head_ref;
    struct Node* prev = NULL;

    // Deleting head node if it holds the key
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        printf("%d deleted from the list.\n", key);
        free(temp);
        return;
    }

    // Traverse the list to find the node to delete
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // Key not found in the list
    if (temp == NULL) {
        printf("%d not found in the list.\n", key);
        return;
    }

    // Unlink the node from the linked list
    prev->next = temp->next;
    printf("%d deleted from the list.\n", key);
    free(temp);
}

void displayList(struct Node* node) {
    if (node == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked list: ");
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, value;

    do {
        printf("\nMenu:\n");
        printf("1. Insert a node\n");
        printf("2. Delete a node\n");
        printf("3. Display list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                insertAtEnd(&head, value);
                break;
            case 2:
                printf("Enter the value to delete: ");
                scanf("%d", &value);
                deleteNode(&head, value);
                break;
            case 3:
                displayList(head);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
