# List_Operations

Source code of Vector.h, List.h, and dsexceptions.h by Mark Allen Weiss

## Part 1
Times how long it takes to push elements from the back into vectors and lists\
Times how long it takes to visit elements in vectors and lists\
Implemeted visitAll() in Vector.h and List.h

### Vector Timing

| Type | Number of Elements | Time for Insertion (milliseconds) | Time for Visiting (milliseconds) |
|-------|-------------------|-------------------|------------------|
|int    |0	                |              0.006|	            0.004|
|    	  |10	                |              0.006|             0.005|
| 	    |100	              |              0.009|             0.004|
| 	    |1000	              |              0.031|           	0.010|
| 	    |10000	            |              0.224|	            0.037|
| 	    |100000	            |              5.106|           	0.354|
| 	    |1000000	          |             24.979|           	3.647|
|double	|0	                |              0.003|           	0.002|
| 	    |10	                |              0.006|           	0.002|
| 	    |100	              |              0.008|           	0.003|
| 	    |1000	              |              0.039|           	0.006|
| 	    |10000	            |              0.287|           	0.069|
| 	    |100000	            |              3.591|           	0.355|
|       |1000000	          |             31.023|           	3.778|

### List Timing

| Type | Number of Elements	| Time for Insertion (milliseconds)	| Time for Visiting (milliseconds) |
|---|---|---|---|
|int	|0	|0.004	|0.003|
| 	|10	  |0.003	|0.003|
|   |100	  |0.013	|0.005|
| 	|1000	  |0.089	|0.008|
| 	|10000	|0.912	|0.050|
| 	|100000	|11.128	|0.536|
| 	|1000000	|92.025	|6.569|
|double	|0	|0.002	|0.003|
| 	|10	      |0.003	|0.002|
| 	|100	    |0.014	|0.003|
| 	|1000	    |0.084	|0.008|
| 	|10000	  |1.146	|0.098|
| 	|100000	  |9.510	|0.564|
| 	|1000000	|91.037	|6.553|


## Part 2
Times how long it takes to push elements from the front into vectors and lists\
Times how long it takes to visit elments in vectors and lists\
Implemented visitAll() in Vector2.h and List.h, and implemented push_front() in Vect2.h

### Vector Timing

| Type | Number of Elements	| Time for Insertion (milliseconds)	| Time for Visiting (milliseconds)|
|---|---|---|---|
|int	|0	|0.003	|0.002|
| 	|10	|0.012	|0.002|
| 	|100	|0.040	|0.002|
| 	|1000	|2.163	|0.006|
| 	|10000	|194.332	|0.037|
| 	|100000	|18870.800	|0.348|
| 	|200000	|74890.200	|0.660|
|double	|0	|0.003	|0.002|
| 	|10	|0.022	|0.002|
| 	|100	|0.028	|0.003|
| 	|1000	|4.076	|0.009|
| 	|10000	|212.621	|0.033|
| 	|100000	|19139.500	0.405|
| 	|200000	|78169.800	|0.721|


### List Timing

|Type |	Number of Elements	|Time for Insertion (milliseconds)	|Time for Visiting (milliseconds)|
|---|---|---|---|
|int	|0	|0.002	|0.003|
| 	|10	|0.007	|0.003|
| 	|100	|0.012	|0.003|
| 	|1000	|0.094	|0.008|
| 	|10000	|0.880	|0.065|
| 	|100000	|8.578	|0.509|
| 	|200000	|23.502	|1.154|
|double	|0	|0.002	|0.003|
| 	|10	|0.004	|0.002|
| 	|100	|0.014	|0.004|
| 	|1000	|0.184	|0.008|
| 	|10000	|0.938	|0.059|
| 	|100000	|9.311	|0.505|
| 	|200000	|18.095	|1.198|

