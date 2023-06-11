#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list
 * is a palindrome
 * @head: pointer to head of list
 * Return: 0 if it is not a palindrome,
 * 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
    listint_t *slow = *head;
    listint_t *fast = *head;
    listint_t *prev = NULL;
    listint_t *next = NULL;

    // Find the middle node using the two-pointer technique
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    if (fast != NULL)
    {
        // List has odd number of nodes, skip the middle node
        slow = slow->next;
    }

    // Reverse the second half of the list
    while (slow != NULL)
    {
        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    // Check for palindrome by comparing the first and reversed second half
    listint_t *first = *head;
    listint_t *second = prev;

    while (second != NULL)
    {
        if (first->n != second->n)
        {
            return 0; // Not a palindrome
        }

        first = first->next;
        second = second->next;
    }

    return 1; // Palindrome
}

