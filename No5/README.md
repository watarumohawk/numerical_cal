データをExcelで表示する場合は、data.datではなくdata.xlsでやった方が便利。

SublimetextとMacの環境だと、データが同じセルに入ってしまう。

例:

| A      | B      |
|:-------|:------:|
| x-data y-data|  |


理想:

| A      | B      |
|:-------|:------:|
| x-data | y-data |


WindowsのVisual Studioだと問題無く出来ていた。

なので、今回はcsvファイルに出力してグラフにする。

