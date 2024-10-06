// make Direction enumerator or struct , up,down,left, right
enum class Direction
{
	Up,   // y coordinate is -ve    pacmanRowPos--  also pacCircle.rotate(90d)upward [when open  mouth implemented]
	Down, // y coordinate is +ve    pacmanRowpos++  also pacCircle.rotate(90d) or (180d) or (270d)
	Left, // x coordinate is -ve    pacmanColumnPos--  
	Right // x coordinate is +ve    pacmanColumnPos++
	/*
	* if currently pacCircle is towards right(initial pos) then if i want to make it turn towards left then i rotate 180d
	* if currently pacCircle is towards right(initial pos) then if i want to make it turn towards up then i rotate 90d
	* if currently pacCircle is towards right(initial pos) then if i want to make it turn towards down then i rotate 270d or -90d
	* etcs...
	* IMPLEMENT THIS USING in moveUp,Down... functions
	* For example,
	* in moveUp function
	* if current direction = right
	* then pacCircle rotate(90d)
	* if current direction = left
	* then pacCircle rotate(270d) or (-90d)
	* if current direction = down
	* then pacCircle rotate (180d)
	*/
};