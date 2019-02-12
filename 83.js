/**
 *  * Definition for singly-linked list.
 *   * function ListNode(val) {
 *    *     this.val = val;
 *     *     this.next = null;
 *      * }
 *       */
/**
 *  * @param {ListNode} head
 *   * @return {ListNode}
 *    */
var deleteDuplicates = function(head) {
    if (!head) return head;
    let i = head;
    while (i.next) {
        if (i.val == i.next.val) {
            i.next = i.next.next;
        } else {
            i = i.next;
        }
    }
    return head;
};
