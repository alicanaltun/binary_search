# binary_search
Bu proje bir dizideki elemanı İkili Arama (Binary Search) yöntemiyle bulmayı sağlayan bir C kodudur.

İlk önce örnek bir dizi oluşturulur ve bu dizinin eleman sayısı hesaplanır. Kullanıcıdan bu örnek dizide aramak istediği değer istenir
ve bu değer "hedef" değişkenine atanır. İkili Arama sadece sıralı dizilerde kullanılabildiğinden örnek dizi küçükten büyüğe olmak
üzere Kabarcık Sıralama (Bubble Sort) yöntemiyle sıralanır. Sıralanmış bu dizi binarySearch() fonksiyonuna gönderilir. Bu fonksiyon parametre olarak
diziyi, dizin ilk indeksini, dizinin son indeksini ve hedef değişkenini alır. İlk önce dizinin ilk indeksinin, son indeksine küçük veya eşit olup
olmadığı kontrol edilir. Eğer bu durum sağlanıyorsa güncel dizinin orta noktası bulunarak, bu noktanın indeksi "orta" değişkenine atanır.
Sonrasında 3 ihtimal kontrol edilir. İlk önce dizinin ortanca indeksinin aranan değere eşit olup olmadığı sorgulanır. Bu kontrol doğruysa "orta" değişkeni
değer olarak döndürülür. İlk kontrolün yanlış olduğu durumda ortanca indeksin, aranan değerden küçük olup olmadığı kontrol edilir. Durum sağlandığında
aranan değerin dizinin sağ tarafında kaldığı anlaşılıyor. Bu yüzden fonksiyon özyineli olarak tekrar çağrılır fakat ilk indeks yerine ortanca indeksten hemen
sonra gelen indeks fonksiyona parametre olarak gönderilir. Eğer iki durumda sağlanmazsa aranan değerin dizinin sol tarafında kaldığı anlaşılıyor. Fonksiyon
tekrardan çağrılır fakat bu sefer son indeks yerine ortanca indeksten bir önceki indeks parametre olarak gönderilir. Fonksiyondan çıkan sonuca göre kullanıcıya
bilgi yazdırılır. 

Kodu herhangi bir C derleyicisinde örnek dizideki sayıları değiştirerek derleyip çalıştırabilirsiniz.
