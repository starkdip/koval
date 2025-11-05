import java.until.LinkedList;
public class Cache<T>{
    private final LinkedList<T> items;
    private final int maxSize;

    public cache(int maxSize){
        if (maxSize <=0){
            throw new IllegalArgumentException("фигня переделывай");
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
}