bool isValidSudoku(vector<vector<char>>& board) {
	bool r[9][9], c[9][9],b[3][3][9];
	int num;
	for (int i = 0;i < 9;i++)
		for (int j = 0;j < 9;j++)
			r[i][j] = c[i][j] = false;
	for (int i = 0;i < 3;i++)
		for (int j = 0;j < 3;j++)
			for (int k = 0;k < 9;k++)
				b[i][j][k] = false;
	for (int y = 0;y < board.size();y++)
	{
		for (int x = 0;x < board[y].size();x++)
		{
			if (board[y][x] == '.') continue;
			num = board[y][x] - '0'-1;
			if (r[y][num])
				return false;
			else
				r[y][num] = true;
			if (c[x][num])
				return false;
			else
				c[x][num] = true;
			if (b[y/3][x/3][num])
				return false;
			else
				b[y / 3][x / 3][num] = true;
		}
	}
	return true;
}