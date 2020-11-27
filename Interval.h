class Interval {

  private:
    long nextMillis;
    long interval;

  public:
    Interval(long i) {
      this->interval = i;
      nextMillis = millis() + interval;
    }

    bool passed() {
      long currentMillis = millis();

      if (nextMillis <= currentMillis) {
        nextMillis = currentMillis + interval;
        return true;
      } else {
        return false;
      }
    }

};
