//     Development Dalına Bir Feature Dalının Merge Edilmesi

//     Feature Dalında Çalışma
//     Öncelikle, üzerinde çalışılacak özelliğe özel bir dal oluşturulur (feature-branch). Bu dal, development dalından türetilir.

// git checkout development
// git pull origin development  # En son değişiklikleri almak için
// git checkout -b feature-branch

// Feature Dalında Geliştirme Yapma

// feature-branch üzerinde gerekli geliştirmeler yapılır ve değişiklikler commit edilir.

// git add .
// git commit -m "Feature ile ilgili değişiklikler"

// Değişiklikleri development Dalına Merge Etme

// Önce development dalına geçilir ve en güncel değişiklikler alınır. 
// Sonra feature-branch dalındaki değişiklikler development dalına merge edilir.

//     git checkout development
//     git pull origin development  # En güncel değişiklikleri almak için
//     git merge feature-branch
//     git push origin development  # Değişiklikleri uzak depoya göndermek için

// Development Dalındaki Değişiklikleri master Dalına Merge Etme

// Bir sürümün canlıya alınması gerektiğinde, development dalındaki değişiklikler master dalına merge edilir.

// git checkout master
// git pull origin master  # En son değişiklikleri almak için

// development Dalındaki Değişiklikleri master Dalına Merge Etme

//     git merge development
//     git push origin master  # Değişiklikleri uzak depoya göndermek için

// Bu adımlar, master-development modelinde bir özelliğin geliştirme sürecinden canlıya alınma sürecine kadar olan yolculuğunu gösterir. 
// Merge işlemleri sırasında çatışmalar meydana gelebilir; bu durumda, Git çatışmaları çözmek için kullanıcıya bilgi verir ve manuel müdahale gerekebilir. 
// Çatışmalar çözüldükten sonra merge işlemi tamamlanabilir.