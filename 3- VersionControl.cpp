// Proje Versiyon Kontrolü Nasıl Yapılır?

// Proje versiyon kontrolü, yazılım geliştirme sürecinde kodun farklı versiyonlarını yönetmek için kullanılır. 
// Git, bu süreci kolaylaştıran dağıtık bir versiyon kontrol sistemidir. 
// Versiyon kontrolü, değişikliklerin izlenmesini, geri alınmasını ve ekip içindeki işbirliğini kolaylaştırır.

// 1. Repo Oluşturma ve Klonlama
//     Repo Oluşturma (git init): Yeni bir proje başlatırken, projenin bulunduğu dizinde git init komutunu çalıştırarak bir Git deposu oluşturursunuz. 
//     Bu komut, .git adında gizli bir dizin oluşturur ve Git'in projeyi takip etmesi için gerekli tüm yapılandırma ve veritabanları burada saklanır.

//     Repo Klonlama (git clone): Mevcut bir projeyi çalışmanız için kendi bilgisayarınıza kopyalamak istediğinizde git clone [URL] komutunu kullanırsınız. 
//     Bu, uzak bir depodaki projenin bir kopyasını yerel diskinize indirir ve otomatik olarak bu depoyu "origin" olarak ayarlar.

// 2. Değişikliklerin Yönetimi
//     Değişiklikleri Sahneye Alma (git add): Bir veya birden fazla dosyadaki değişiklikleri gelecek bir commit için sahneye almak için 
//     git add [dosya_adı] komutunu kullanırsınız. git add . komutu ile mevcut dizindeki tüm değişiklikleri sahneye alabilirsiniz.

//     Değişiklikleri Kaydetme (git commit): Sahneye alınan değişiklikleri depoya kaydetmek için 
//     git commit -m "Açıklama mesajı" komutunu kullanırsınız. Her commit, proje tarihçesinde bir nokta oluşturur ve ileride bu noktaya geri dönebilirsiniz.

// 3. Değişiklikleri Paylaşmak ve Birleştirmek

//     Değişiklikleri Uzak Depoya Gönderme (git push): Yerel deponuzdaki değişiklikleri uzak depoya göndermek için 
//     git push origin [dal_ismi] komutunu kullanırsınız. Bu, yerel deponuzdaki değişiklikleri uzak depoya aktarır.

//     Uzak Değişiklikleri Çekme (git pull): Uzak depodaki değişiklikleri yerel deponuza çekmek için 
//     git pull origin [dal_ismi] komutunu kullanırsınız. Bu komut, uzak deponun son durumunu yerel depo ile birleştirir.

// Temel Git Komutları

//     Dal Oluşturma (git branch [dal_ismi]): Yeni bir dal oluşturur. Dal oluşturduktan sonra, 
//     git checkout [dal_ismi] ile bu dala geçiş yapabilirsiniz.

//     Dal Değiştirme (git checkout [dal_ismi]): Mevcut bir dala geçiş yapar. 
//     Yeni bir dal oluşturup buna geçmek için git checkout -b [yeni_dal_ismi] kullanılabilir.

//     Değişiklikleri Görüntüleme (git status, git diff): git status, dosya durumunu (modifiye edilmiş, sahneye alınmış, commit'lenmiş) gösterir. 
//     git diff, commit'lenmemiş veya sahneye alınmamış değişiklikleri gösterir.

//     Geri Alma (git revert, git reset): git revert [commit_id] ile belirli bir commit'in değişik