class solution{
    ListNode* addTwoNum(ListNode* l1, ListNode* l2){
        ListNode* bot =new ListNode(0); 
        ListNode* pt = bot;
        int carry =0;

        while(l1 != nullptr|| l2!= nullptr || carry!=0){
            int d1 = (l1 != nullptr) ? l1->val:0; //If l1 has number in it, it will be set to d1, else it will be set to 0. 
            int d2 = (l2!=nullptr) ? l2->val:0;

            int sum = d1 + d2 + carry; 
            int di = sum%10;
            carry= sum/10;

            ListNode* newNode = new ListNode(di);
            pt->next = newNode; 
            pt = pt->next;

            l1 =(l1 != nullptr) ? l1->next : nullptr;
            l2 =(l2 != nullptr) ? l2->next : nullptr;
        }
    }
};