class Node
{
    int data;
    Node next;

    public Node(int data)
    {
        this.data = data;
    }
    public void printList(Node n)
    {
        while (n != null)
        {
            System.out.print(n.data + " ");
            n = n.next;
        }
    }
}
public class singlyLinkedList
{

    public static void main(String[] args)
    {
        Node head  = new Node(5);
        Node second  = new Node(10);
        Node third  = new Node(3);

        head.next = second;
        second.next = third;

        head.printList(head);
    }
}
