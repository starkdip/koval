import java.until.LinkedList;
public class Cache<T>{
    private final LinkedList<T> items;
    private final int maxSize;
    public Cache(int maxSize) {
        if (maxSize <= 0) {
            throw new IllegalArgumentException("Размер кэша положительное число")
        }
        this.maxSize = maxSize;
        this.items = new LinkedList<>();
    }
    public void add(T item) {
        if (item == null) {
            throw new IllegalArgumentException("Элемент не может быть null");
        }
        items.addLast(item);
        if (items.size() > maxSize) {
            items.removeFirst();
        }
    }
    public boolean remove(T item) {
        return items.remove(item);
    }
    public boolean exists(T item) {
        return items.contains(item);
    }
    public T getFirst() {
        if (items.isEmpty()) {
            return null;
        }
        return items.getFirst();
    }
    public T getLast() {
        if (items.isEmpty()) {
            return null;
        }
        return items.getLast();
    }
}