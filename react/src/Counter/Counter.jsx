import React, { useState } from 'react'
import './Counter.css'

const Counter = () => {
    const [count, setCount] = useState(0)
    return (
        <div className='counter'>
            <div className="counter-value">{count}</div>
            <button onClick={() => setCount(count + 1)} className="counter-btn">Increment By 1</button>
        </div>
    )
}

export default Counter
