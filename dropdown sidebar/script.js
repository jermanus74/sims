document.addEventListener("DOMContentLoaded", function () {
let arrow = document.querySelectorAll(".arrow");
let sidebar = document.querySelector(".sidebar");
let sidebarBtn = document.querySelector(".bx-menu");
var links = document.querySelectorAll(".nav-links a");

for (var i = 0; i < arrow.length; i++) {
  arrow[i].addEventListener("click", (e) => {
    let arrowParent = e.target.parentElement.parentElement;
    arrowParent.classList.toggle("showMenu");
  });
}

sidebarBtn.addEventListener("click", () => {
  sidebar.classList.toggle("close");
});

  links.forEach(function (link) {
    link.addEventListener("click", function () {
      // Remove "active" class from all links
      links.forEach(function (otherLink) {
        otherLink.parentNode.classList.remove("active");
      });

      // Add "active" class to the clicked link's parent
      this.parentNode.classList.add("active");
    });
  });
});
