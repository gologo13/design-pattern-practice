#!/usr/bin/env ruby

require 'observer'

class WatchModel
    include Observable

    def initialize
        @runnning = false
        @time = 0   # accumulaton time
        @last = 0.0
        Thread.start do
            loop do
                sleep 0.01
                if @running
                    now = Time.now.to_f
                    @time += now - @last
                    @last = now
                    changed
                    notify_observers(@time)
                end
            end
        end
    end

    def start_stop
        @last = Time.now.to_f
        @running = !@running
    end

    def time
        @time
    end

end
