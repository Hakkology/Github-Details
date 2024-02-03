// Git'te Dallanma (Branching)

// Git'in güçlü yönlerinden biri, dallanma mekanizmasıdır. 
// Dallanma, farklı özelliklerin, düzeltmelerin veya denemelerin ana kod tabanından bağımsız olarak geliştirilebilmesi için kullanılır. 
// Her dal, ana kod tabanının bir kopyası gibidir ve üzerinde bağımsız değişiklikler yapılabilir. 
// Bu, bir özelliğin geliştirilmesi veya bir hata düzeltmesinin yapılması sırasında ana kod tabanının istikrarını korur.

// Branch Komutları

//     Dal Oluşturma: git branch <branch-name> komutu ile yeni bir dal oluşturulur. 
//     Bu, mevcut durumdan bir kopya oluşturarak yeni bir çalışma alanı sağlar.

//     Dala Geçiş Yapma: git checkout <branch-name> komutu ile oluşturulan veya mevcut bir dala geçiş yapılır. 
//     Git 2.23 sürümünden itibaren git switch <branch-name> komutu da kullanılabilir.

//     Dal Listeleme: git branch komutu, yerel dalları listeler. git branch -a komutu hem yerel hem de uzak dalları gösterir.

// Özellik Ekleme Master-Development

// Master-Development düzeni, git dallanma stratejilerinin bir örneğidir. 
// Bu modelde, genellikle iki ana dal bulunur: master ve development. 
//  Master dalı, yayına hazır durumdaki kodun bulunduğu dal olarak kabul edilir. Development dalı ise geliştirme ve test işlemlerinin yapıldığı ana daldır.

//     Master Dalı: Ürünün canlıya alınmış sürümünü temsil eder. Stabil ve hata içermeyen kodun bulunduğu dal olarak kabul edilir.
//     Development Dalı: Geliştirme sürecindeki değişikliklerin yapıldığı ve test edildiği dal. 
//     Yeni özellikler burada geliştirilir ve stabil hale geldikten sonra master dalına birleştirilir.

// Geliştirme Süreci

//     Yeni Özellik Geliştirme: Yeni bir özellik geliştirilmeye başlandığında, 
//     development dalından yola çıkılarak özelliğe özel bir dal oluşturulur (örneğin, feature/login).

//     Geliştirme ve Test: Özellik üzerinde geliştirme ve test işlemleri yapılır. 
//     Bu süreç boyunca, özellik dalı düzenli olarak development ile senkronize edilebilir.

//     Development'a Birleştirme: Özellik tamamlandığında ve testlerden geçtiğinde, özellik dalı development dalıyla birleştirilir. 
//     Bu, bir "pull request" (PR) veya "merge request" (MR) aracılığıyla yapılır ve ekip üyeleri tarafından inceleme yapılır.

//     Master'a Yayınlama: development dalındaki kod stabil ve yayınlanmaya hazır olduğunda, 
//     development dalı master dalıyla birleştirilir ve ürün canlı ortama alınır.

//     Bu düzen, kodun kalitesini korurken ekip üyelerinin kod üzerinde işbirliği yapmasını ve 
//     sürekli entegrasyon/deployment (CI/CD) süreçlerini kolayca yönetmesini sağlar. 
//     Her birleştirme işlemi, kod kalitesini ve istikrarını korumak için otomatik testler ve kod incelemeleri ile desteklenmelidir