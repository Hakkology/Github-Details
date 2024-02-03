// 1. Branşlar ve Dal Yönetimi

//     Branş Oluşturma: Her yeni özellik, düzeltme veya deneme için ayrı bir branş (dal) oluşturulur. 
//     Bu, ana kod tabanını etkilemeden bağımsız çalışmayı sağlar.
//     Branşlarda Çalışma: Geliştiriciler kendi branşlarında çalışır ve kodlarına özgü değişiklikleri yaparlar. 
//     Bu, eşzamanlı olarak birçok farklı özellik üzerinde çalışmayı mümkün kılar.
//     git branch ve git checkout: Bu komutlar, yeni branşlar oluşturmak ve farklı branşlar arasında geçiş yapmak için kullanılır.

// 2. Merkezi Repo ve Pull Request'ler

//     Merkezi Repo Kullanımı: Tüm geliştiriciler, ortak bir uzak repo (örneğin, GitHub'daki bir repo) üzerinde çalışır. 
//     Bu repo, projenin merkezi noktasıdır.

//     Pull Request Açma: Bir geliştirici bir özelliği tamamladığında, 
//     değişikliklerini ana dal (master veya main) ile birleştirmek için bir pull request (PR) açar.

//     Kod İncelemesi ve Birleştirme: Diğer ekip üyeleri, PR'yi inceleyebilir, yorum yapabilir ve değişiklikleri kabul edip ana dala birleştirebilir. 
//     Bu süreç, kod kalitesinin korunmasına yardımcı olur.

// 3. Çatışma Yönetimi (Conflict Management)

//     Çatışmaların Tespiti: İki veya daha fazla kişi aynı kod parçaları üzerinde değişiklik yaptığında çatışmalar meydana gelebilir. 
//     Git, bu çatışmaları birleştirme (merge) sırasında tespit eder.
//     Manuel Çözüm: Geliştiriciler, çatışan kısımları manuel olarak inceleyip düzeltebilirler. Git, çatışmaları çözmek için yardımcı bilgiler sağlar.
//     Çatışmaları Çözme ve Commit Etme: Çatışmalar çözüldükten sonra, geliştirici değişiklikleri commit eder ve birleştirme işlemini tamamlar.

// 4. İletişim ve Planlama

//     Etkili İletişim: Ekip üyeleri arasında açık ve sürekli iletişim, projede ortak bir anlayış ve hedeflerin belirlenmesini sağlar.
//     Proje Yönetimi Araçları: GitHub Issues gibi proje yönetimi araçları, görevlerin ataması ve takibi için kullanılabilir.

// 5. Sürüm Kontrolü ve Etiketleme

//     Sürüm Kontrolü: Proje önemli bir noktaya ulaştığında, git tag komutu ile sürümler etiketlenebilir. 
//     Bu, projenin belirli bir sürümünün kolayca geri alınabilmesini veya indirilebilmesini sağlar.
//     Bu süreçler ve araçlar, birden fazla kişinin tek bir projede etkili bir şekilde çalışabilmesi için gerekli yapıyı sağlar. 
//     Git ve GitHub, kodun yönetimi, işbirliği ve iletişim açısından güçlü araçlar sunarak modern yazılım geliştirme ekiplerinin ihtiyaçlarını karşılar.