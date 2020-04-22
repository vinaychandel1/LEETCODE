class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int totalRows = matrix.size();
        if (!totalRows) return false; // Return empty matrix
        int totalCols = matrix[0].size();
        
        int start = 0, end = totalRows * totalCols - 1, mid;
        // A 2D array is really just a 1D array but visually different.
		// We can, given an index, find the row and column it belongs to. We proceed
		// with a regular binary search.
        while (start <= end) {
            mid = (start + (end - start) / 2); // Mid index
            int middleElementValue = (matrix[mid / totalCols][mid % totalCols]); // Value at mid index
            if (middleElementValue == target) {// mid index / total cols gives me the row
                return true; // mid index % total cols gives me the column
            } else if (middleElementValue > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } // If I don't find it, return false.
        return false; 
    }
};
