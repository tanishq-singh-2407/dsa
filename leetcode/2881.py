# Leetcode: https://leetcode.com/problems/create-a-new-column/description/

import pandas as pd

def createBonusColumn(employees: pd.DataFrame) -> pd.DataFrame:
    employees['bonus'] = 2 * employees['salary']
    return employees