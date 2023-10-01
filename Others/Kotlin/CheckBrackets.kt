public class CheckBrackets {

    public static class Stack{

            char[] bracket = new char[100];
            int top = -1;
            int capacity = 100;



            //check if the stack is empty
            public boolean isEmpty(){
            return (top == -1);
            }

            //push a bracket to the stack
            public void push(char e){

                if(top ==(capacity-1)){
                    System.out.println("The Stack is full");
                }
                else
                    bracket[++top] = e;
            }

            //remove the top  bracket
            public char pop(){

                char temp = ' ';

                if(isEmpty()){
                    System.out.println("The Stack is empty");
                }
                else {
                    temp = bracket[top];
                    top--;
                }
                return temp;
            }
    }
    //Returns true if character1 and character2 are matching left and right Parenthesis
    static boolean isMatching(char element1,char element2){

        if((element1 =='(')&& (element2==')'))
            return true;
        else if((element1 =='{')&& (element2=='}'))
            return true;
        else if((element1 =='[')&& (element2==']'))
            return true;
        else
            return false;
    }
    //Return true if expression has balanced Parenthesis
    static boolean areParenthesisBalanced(char exp[]){
        //Declare an empty character Stack
        Stack s1 = new Stack();

        //Traverse the given expression to check matching parenthesis
        for(int i = 0;i<exp.length;i++){

            //If the exp[i] is a starting parenthesis then push it
            if(exp[i]=='(' || exp[i]=='{' || exp[i]=='['){
                s1.push(exp[i]);
            }

            //If exp[i] is an ending parenthesis then pop from stack and check if the popped parenthesis is a matching pair
            else if(exp[i]==')' || exp[i]=='}' || exp[i]==']'){

                //If we see an ending parenthesis without a pair then return false
                if(s1.isEmpty()){
                    return  false;
                }

                //Pop the top element from stack, if it is not a pair parenthesis of character
                // then there is a mismatch. This happens for expressions like {(})
                else if(!isMatching(s1.pop(),exp[i])){
                    return false;
                }
            }
        }
        //If there is something left in expression then there is a starting parenthesis without a closing parenthesis




        if(s1.isEmpty()){
            return true; //balanced
        }
        else{
            return false; //not balanced
        }
    }

    public static void main(String[]args){
        CheckBrackets c1 = new CheckBrackets();

        char exp[] = {'(','{','[',')','}',')'};
        char exp2[] = {'(','(','(',')',')'};
        char exp3[] = {'{','(','}',')'};
        char exp4 []={'{'};

        if(areParenthesisBalanced(exp4)){
            System.out.println("Balanced");
        }
        else{
            System.out.println("Not balanced");
        }
    }



}
