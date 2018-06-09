<h1>Arduion ile Havada Yazı</h1>

<p>Bu proje Arduino Günü için oluşturulmuştur.</p>
<p>Kendi etrafında dönebilen bir mekanızmaya bağlı 8 ledin, dönüş sırasında belirli bir düzene göre yüksek
    hızda yanıp sönmesi ile havada yazı oluşturma prensibine göre çalışır.
</p>
<p>Mekanizma dururken ledler yanıp sönsede yazıyı göz ile ayırt edebilmek mümkün değildir. Ancak mekanızma döndürülünce 
    ledler havada farklı yerlerde yanıp söneceğinden göz ile algılayabilmek mümkün olmaktadır.    
</p>

<p>Bir harfin aşağıdaki şekilde Arduino' nun çıkışına aktarılmıştır. </p>
<span>
    A B C D E F         A: 0xE7

    0 1 1 1 1 0         B: 0x90
    1 0 0 0 0 1
    1 0 0 0 0 1         C: 0x90
    1 1 1 1 1 1
    1 0 0 0 0 1         D: 0x90
    1 0 0 0 0 1
    1 0 0 0 0 1         E: 0xE7
    0 0 0 0 0 0
</span>

<p>...</p>