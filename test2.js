/*Edward is organizing a meeting and has to order lunch for everyone in the team. To make his task simpler he has prepared two lists. 
The first list has pairs of team members and their preferred cuisine types. Each team member either has a preference for a particular
cuisine or does not have any particular preference and likes all cuisines. The second one contains a list of lunch options along with 
the cuisine type to which it belongs. Each lunch option belongs to only one cuisine type.
Write an algorithm that outputs a list of all possible pairs of team members along with lunch option they would enjoy. There can be no, 
one or more entries for a team member in the output list depending on how many lunch options satisfy their choice of cuisine(s). 

Input:
The input to the function/method consists of four arguments – lunchMenuPairs, representing a list containing pairs of lunch option and its associated cuisine type; teamCuisinePreference, representing a list containing pairs of team members and their cuisine preferences. 

Output:
Return a list representing all possible pairs of team members and lunch options they would enjoy.

Note
If a team member does not have a particular preference and likes all cuisines, then the preference is specified as a "*" 
in the teamCuisinePreference list. */


var list1=[['pizza','itly'],['curry','india'],['masala','india']];
var list2=[['jose','itly'],['john','india'],['sara','thai'],['mary','*']];
var sample=[];
for(var i in list2){ 
  for(var j in list1){
    if(list2[i][1]===list1[j][1]){
      var s=[list2[i][0],list1[j][0]];
      sample.push(s);
    }else if (list2[i][1]==='*'){
     var s=[list2[i][0],list1[j][0]];
      sample.push(s);
    }
  }
}
console.log(sample);

/*
Output:
[
  ["jose","pizza"],
  ["john","curry"],
  ["john","masala"],
  ["mary","pizza"],
  ["mary","curry"],
  ["mary","masala"]
]
*/