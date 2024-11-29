let src={
    age: 23,
    weight: 60,//object cloning
    height: 180
};
let dest={...src};
src.age= 25;
console.log("src:",src);
console.log("dest:",dest);