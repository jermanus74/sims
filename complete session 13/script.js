'use strict';

const modal = document.querySelector('.modal');
const overlay = document.querySelector('.overlay');
const btnCloseModal = document.querySelector('.btn--close-modal');
const btnsOpenModal = document.querySelectorAll('.btn--show-modal');
const scrollingToBtn = document.querySelector('.btn--scroll-to');
const sec1 = document.querySelector('#section--1');
// const links=document.querySelectorAll(".nav__link");

///////////////////////////////////////
// Modal window
const openModal = function (e) {
  e.preventDefault();
  modal.classList.remove('hidden');
  overlay.classList.remove('hidden');
};

const closeModal = function () {
  modal.classList.add('hidden');
  overlay.classList.add('hidden');
};

btnsOpenModal.forEach(btn => btn.addEventListener('click', openModal));

// for (let i = 0; i < btnsOpenModal.length; i++)
//   btnsOpenModal[i].addEventListener('click', openModal);

btnCloseModal.addEventListener('click', closeModal);
overlay.addEventListener('click', closeModal);

document.addEventListener('keydown', function (e) {
  if (e.key === 'Escape' && !modal.classList.contains('hidden')) {
    closeModal();
  }
});

// // // // // // // // // // // //
// scroll to in a page
scrollingToBtn.addEventListener('click', function (e) {
  // to calculate current scroll position
  e.preventDefault();
  const s1coords = sec1.getBoundingClientRect();
  // console.log(s1coords)
  //  old scrolling method
  // window.scrollTo(s1coords.left+window.pageXOffset,s1coords.top=window.pageYOffset);

  // window.scrollTo({
  //   left:s1coords.left+window.pageXOffset,
  //   top:s1coords.top=window.pageYOffset,
  //   behavior:"smooth"
  // });
  // // // // // // // // // // // //
  // modern scrolling method
  sec1.scrollIntoView({ behavior: 'smooth' });
});

// // // // // // // // // // // //
// // page navigation

// links.forEach((el) => {
//   el.addEventListener('click', (e) => {
//     e.preventDefault();
//     const id = el.getAttribute('href');
//     document.querySelector(id).scrollIntoView({ behavior: 'smooth' });
//   });
// });

// // // // // // // // // // // //
// event delegation to add event listener to more

document.querySelector('.nav__links').addEventListener('click', e => {
  e.preventDefault();

  //matching strategy
  if (e.target.classList.contains('nav__link')) {
    const id = e.target.getAttribute('href');
    document.querySelector(id).scrollIntoView({ behavior: 'smooth' });
  }
});

// // // // // // // // // //
// // // // // // // // // //
// // // // // // // // // //

// tabbed compnent
const tabs = document.querySelectorAll('.operations__tab');
const tabsContainer = document.querySelector('.operations__tab-container');
const tabsContent = document.querySelectorAll('.operations__content');

tabsContainer.addEventListener('click', function (e) {
  const clicked = e.target.closest('.operations__tab');

  if (!clicked) return;

  // removing tab class
  tabs.forEach(t => {
    if (t !== clicked) {
      t.classList.remove('operations__tab--active');
    }
  });

  clicked.classList.toggle('operations__tab--active');

  const activeTab = clicked.dataset.tab;

  tabsContent.forEach(content => {
    content.classList.remove('operations__content--active');
  });

  document
    .querySelector(`.operations__content--${activeTab}`)
    .classList.add('operations__content--active');
  console.log(activeTab);
});

// menu fade animation
// event handler opacity
const handleHover = (e, opacity) => {
  if (e.target.classList.contains('nav__link')) {
    const link = e.target;
    const siblings = link.closest('.nav').querySelectorAll('.nav__link');
    const logo = link.closest('.nav').querySelector('img');

    // change opacity
    siblings.forEach(el => {
      if (el !== link) {
        el.style.opacity = opacity;
      }
    });
    logo.style.opacity = opacity;
  }
};
const nav = document.querySelector('.nav');
nav.addEventListener('mouseover', e => {
  handleHover(e, 0.5);
});
nav.addEventListener('mouseout', e => {
  handleHover(e, 1);
});

// stick nav old way
// const initialCoords=sec1.getBoundingClientRect();

// window.addEventListener("scroll",()=>{
//   if (window.scrollY > initialCoords.top) {
//     nav.classList.add('sticky');
//   }else{
//     nav.classList.remove('sticky');
//   }

// })

// modern scrolling way
const header = document.querySelector('.header');
const navHeight = nav.getBoundingClientRect().height;

const stickNavy = entries => {
  const [entry] = entries;

  // adding stick property to nav
  if (!entry.isIntersecting) {
    nav.classList.add('sticky');
  } else {
    nav.classList.remove('sticky');
  }
};

const headerObserver = new IntersectionObserver(stickNavy, {
  root: null,
  threshold: 0,
  rootMargin: `-${navHeight}px`,
});
headerObserver.observe(header);

// reveal Selection( so as to be seen when the page scroll reaches at that point)
const allSections = document.querySelectorAll('.section');

const revealSection = (entries, observer) => {
  const [entry] = entries;
  if (!entry.isIntersecting) {
    return;
  }
  entry.target.classList.remove('section--hidden');

  observer.unobserve(entry.target);
};

// call back function
const secObserver = new IntersectionObserver(revealSection, {
  root: null,
  threshold: 0.15,
});

allSections.forEach(section => {
  secObserver.observe(section);
  section.classList.add('section--hidden');
});

// lazy loading img

const imgTarget = document.querySelectorAll('img[data-src]');

const loading = (entries, observer) => {
  const [entry] = entries;

  if (!entry.isIntersecting) {
    return;
  }
  // replace img src with data src
  entry.target.src = entry.target.dataset.src;

  entry.target.addEventListener('load', () => {
    entry.target.classList.remove('lazy-img');
  });
  observer.unobserve(entry.target);
};

const imgObserver = new IntersectionObserver(loading, {
  root: null,
  threshold: 0,
  rootMargin: '200px',
});

imgTarget.forEach(img => {
  imgObserver.observe(img);
});

// slider component
const slides = document.querySelectorAll('.slide');
const btnLeft = document.querySelector('.slider__btn--left');
const btnRight = document.querySelector('.slider__btn--right');
const dotContainer = document.querySelector('.dots');

// Active dot as per slide
const dotFunction = () => {
  slides.forEach((_, i) => {
    dotContainer.insertAdjacentHTML(
      'beforeend',
      `<button class="dots__dot" data-slide="${i}"></button> `
    );
  });
};
dotFunction();

const activeDot = slide => {
  document
    .querySelectorAll('.dots__dot') // Use querySelectorAll instead of querySelector
    .forEach(dot => dot.classList.remove('dots__dot--active'));
  document
    .querySelector(`.dots__dot[data-slide='${slide}']`) // Correct the query
    .classList.add('dots__dot--active');
};
activeDot(0);

// Slide by arrow
let curSlide = 0;
const maxSlide = slides.length;

const goTo = slide => {
  slides.forEach((s, i) => {
    s.style.transform = `translateX(${100 * (i - slide)}%)`;
  });
};

goTo(0);

const nextTo = () => {
  if (curSlide === maxSlide - 1) {
    curSlide = 0;
  } else {
    curSlide++;
  }
  goTo(curSlide);
  activeDot(curSlide);
};

const preSlide = () => {
  if (curSlide === 0) {
    curSlide = maxSlide - 1;
  } else {
    curSlide--;
  }
  goTo(curSlide);
  activeDot(curSlide);
};

btnRight.addEventListener('click', nextTo);
btnLeft.addEventListener('click', preSlide);

dotContainer.addEventListener('click', e => {
  if (e.target.classList.contains('dots__dot')) {
    const { slide } = e.target.dataset;
    goTo(slide);
    activeDot(slide);
  }
});
