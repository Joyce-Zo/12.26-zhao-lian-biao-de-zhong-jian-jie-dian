#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* fast, * slow;
    fast = head, slow = head;
    while (fast && fast->next)  // fast和fast的next都不为NULL则执行
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

int main()
{
    //  自己创建链表
    struct ListNode* newnode1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* newnode2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* newnode3 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* newnode4 = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* newnode5 = (struct ListNode*)malloc(sizeof(struct ListNode));

    //  给链表赋值
    newnode1->val = 1; newnode1->next = newnode2;
    newnode2->val = 2; newnode2->next = newnode3;
    newnode3->val = 3; newnode3->next = newnode4;
    newnode4->val = 4; newnode4->next = newnode5;
    newnode5->val = 5; newnode5->next = NULL;

    //  调用链表函数
    struct ListNode* head = middleNode(newnode1);
    return 0;
}