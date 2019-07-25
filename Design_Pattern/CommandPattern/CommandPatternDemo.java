public class CommandPatternDemo {
   public static void main(String[] args) {
      Stock abcStock = new Stock();

      BuyStock buyStockOrder = new BuyStock(abcStock);
      SellStock sellStockOrder = new SellStock(abcStock);

      Broker broker = new Broker();
      broker.takeOrder(buyStockOrder);
      broker.takeOrder(sellStockOrder);

      broker.placeOrders();
   }
}

/*
xu-Macbook:CommandPattern xushaoming$ java CommandPatternDemo
Stock [ Name: ABC ,Quantity: 10 ] bought
Stock [ Name: ABC, Quantity: 10 ] sold
*/
