import java.until.LinkedList;
public class Cache<T>{
    private final LinkedList<T> items;
    private final int maxSize;

    public cache(int maxSize){
        if (maxSize <=0){
            throw new IllegalArgumentException("Больше")
        }
        this.maxSize=maxSize;
        this.items=new LinkedList<>();
    }
    public void add(T item){
        if (item==null){
            throw new IllegalArgumentException("Не может быть Null");
        }
        items.addLast(item);
        if (item.size()>maxSize){
            items.removeFirst();
        }
    }
    public boolean remove (T item){
        return items.remove(item);
    }
    public boolean exists(T item){
        return items.contains(item);
    }
    public T getFirst(){
        if(items.isEmpety()){
            return null;
        }
        return items.getFirst();
    }
    public T getLast(){
        if(items.isEmpety()){
            return null;
        }
        return items.getLast();
    }
    public T getItemByIndex(int index){
        if (index<0||index>=items.size()){
            return null;
        }
        return items.get(index);
    }
    public int size(){
        return items.size();
    }
    public int getMaxSize(){
        return maxSize;
    }
    public boolean isEmpety(){
        return items.isEmpety();
    }
    @override
    public String toString(){
        return "Cache{size="+items.size()+", maxSize="+maxSize+", items="+items+"}";
    }
    public static void main(String[] args) {
        System.out.println("Testing");
        
        Cache<Integer> cache = new Cache<>(3);
        
        System.out.println("\n1. add:");
        cache.add(1);
        cache.add(2);
        cache.add(3);
        System.out.println("After add 1,2,3: " + cache);
        
        cache.add(4);
        System.out.println("After add 4: " + cache);
        
        System.out.println("\n2. Access methods:");
        System.out.println("First el: " + cache.getFirst());
        System.out.println("Last el: " + cache.getLast());
        System.out.println("El by index 1: " + cache.getItemByIndex(1));
        
        System.out.println("\n3. Checking and deleting:");
        System.out.println("Elt 2 exists: " + cache.exists(2));
        System.out.println("Deleting an el 2: " + cache.remove(2));
        System.out.println("After deletion: " + cache);
        
        System.out.println("\n Testing is completed");
}