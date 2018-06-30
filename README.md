<h1>Arduino ile Havada Yazı</h1>

<p>Bu proje Arduino Günü için oluşturulmuştur.</p>
<p>Kendi etrafında dönebilen bir mekanızmaya bağlı 8 ledin, dönüş sırasında belirli bir düzene göre yüksek
    hızda yanıp sönmesi ile havada yazı oluşturma prensibine göre çalışır.
</p>
<p>Mekanizma dururken ledler yanıp sönsede yazıyı göz ile ayırt edebilmek mümkün değildir. Ancak mekanızma döndürülünce 
    ledler havada farklı yerlerde yanıp söneceğinden göz ile algılayabilmek mümkün olmaktadır.    
</p>

## Çalışma Prensibi
<p>Bir harf aşağıdaki şekilde Arduino' nun çıkışına aktarılmıştır. </p>

<table style="width: 197px; height: 207px;">
<tbody>
<tr>
<td style="width: 32px;">A&nbsp;</td>
<td style="width: 32px;">B&nbsp;</td>
<td style="width: 33px;">&nbsp;C</td>
<td style="width: 33px;">&nbsp;D</td>
<td style="width: 33px;">&nbsp;E</td>
<td style="width: 33px;">&nbsp;F</td>
</tr>
<tr>
<td style="width: 32px;">&nbsp;0</td>
<td style="width: 32px;">&nbsp;1</td>
<td style="width: 33px;">&nbsp;1&nbsp;</td>
<td style="width: 33px;">&nbsp;1&nbsp;</td>
<td style="width: 33px;">&nbsp;1&nbsp;</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
</tr>
<tr>
<td style="width: 32px;">&nbsp;1&nbsp;</td>
<td style="width: 32px;">&nbsp;0</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;0</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;1&nbsp;</td>
</tr>
<tr>
<td style="width: 32px;">&nbsp;1&nbsp;</td>
<td style="width: 32px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;1&nbsp;</td>
</tr>
<tr>
<td style="width: 32px;">&nbsp;1&nbsp;</td>
<td style="width: 32px;">&nbsp;1&nbsp;</td>
<td style="width: 33px;">&nbsp;1&nbsp;</td>
<td style="width: 33px;">&nbsp;1&nbsp;</td>
<td style="width: 33px;">&nbsp;1&nbsp;</td>
<td style="width: 33px;">&nbsp;1&nbsp;</td>
</tr>
<tr>
<td style="width: 32px;">&nbsp;1&nbsp;</td>
<td style="width: 32px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;1&nbsp;</td>
</tr>
<tr>
<td style="width: 32px;">&nbsp;1&nbsp;</td>
<td style="width: 32px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;1&nbsp;</td>
</tr>
<tr>
<td style="width: 32px;">&nbsp;1&nbsp;</td>
<td style="width: 32px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;1&nbsp;</td>
</tr>
<tr>
<td style="width: 32px;">&nbsp;0&nbsp;</td>
<td style="width: 32px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp;0</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
<td style="width: 33px;">&nbsp; 0</td>
<td style="width: 33px;">&nbsp;0&nbsp;</td>
</tr>
</tbody>
</table>
<!-- DivTable.com -->

<p>
    A, B, C, D, E, F ile kodlandmış her sutün için pinlere yazılacak byte değeri şu şekilde
    hesaplanır.
</p>
<span>
        A: 0xE7

        B: 0x90

        C: 0x90

        D: 0x90

        E: 0xE7
</span>




<p>Örnek çalışma videosuna <a href="https://www.instagram.com/p/BirVfcIHgj9/?taken-by=ieeektu" target="_blank">bağlantıdan 
ulaşabilirsiniz.</a> </p>

<p>...</p>

