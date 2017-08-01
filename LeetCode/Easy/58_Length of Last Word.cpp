int lengthOfLastWord(string s) {
	s = s.substr(0, s.find_last_not_of(' ')+1);
	return s.length()==0?0:s.length() - s.find_last_of(' ') - 1;
}