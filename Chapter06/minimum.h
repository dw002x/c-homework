/*
 anthor:duan wei
 date:,Apr.1st, 2022
 function:函数模板minimum
*/
template<typename S>
S minimum(S num1, S num2)
{
	S minimumNum = num1;

	if (num2 < minimumNum)
		minimumNum = num2;

	return minimumNum;

}
