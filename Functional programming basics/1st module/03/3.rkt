(define (bisection f a b e)
  (if (> (- b a) e)
        (if (= (f (/ (+ a b) 2)) 0)
            (/ (+ a b) 2)
            (if (< (* (f a) (f (/ (+ a b) 2))) 0)
                (bisection f a (/ (+ a b) 2) e)
                (bisection f (/ (+ a b) 2) b e)))
           (/ (+ a b) 2)))

;(bisection cos -3.0 0.0 0.001)