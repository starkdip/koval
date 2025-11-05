import java.until.LinkedList;
public class Cache<T>{
    private final LinkedList<T> items;
    private final int maxSize;

    public cache(int maxSize){
        if (maxSize <=0){
            throw new IllegalArgumentException("фигня переделывай");
        }
    }
}