class Solution:
    def addOne(self,head):
        #Returns new head of linked List.
        temp = head
        dup = head
        s = ''
        while(temp != None and temp.next):
            s = s + str(temp.data)
            temp = temp.next
        s = s + str(temp.data)
        num = int(s) + 1
        res = [int(x) for x in str(num)]
        i = 0
        length = len(res)
        while(i < length):
            dup.data = res[i]
            if dup.next == None and i == length-2:
                dup.next = Node(3)
            dup = dup.next
            i = i + 1
        return head
