typedef struct Node {
    int data;
    struct Node *next;
} Node;

struct Node* newNode(int value) {
    struct Node* node = (Node *)malloc(sizeof(struct Node));
    if (node == NULL) {
        // malloc fails. deal with it.
    } else {
        node->data = value;
        node->next = NULL;
    }
    return node;
}

void delete(int value, struct node *head) {
    struct Node* current = head;
    struct Node* previous = NULL;

    while (current != NULL) {
        if (current->data == value) {
            if (previous == NULL) {
                current = current->next;
                free(head);
            } else {
                previous->next = current->next;
                free(current);
                current = previous->next;
            }
        } else {
            previous = current;
            current = current->next;
        }
    }
}
