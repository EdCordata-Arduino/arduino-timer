# Arduino Timer

### Usage:

```c++
#include "Interval.h"

Interval interval = Interval(1000);

void setup() {
  Serial.begin(9600);
}

void loop() {

  if (interval.passed()) {
    Serial.println("1sec passed");
  }

}
```
