#!/usr/bin/env ruby

require 'tk'
require 'WatchModel'

class WatchWindow

    def initialize
        @model = WatchModel.new
        model.add_observer self

        @label = TkLabel.new(nil).pack('fill'=>'x')
        self.update(0)
        btn = TkButton.new
        btn.text('start/stop')
        btn.command(proc{model.start_stop})
        btn.pack('fill'=>'x')
        btn = TkButton.new
        btn.text('quit')
        btn.command(proc{exit})
        btn.pack('fill'=>'x')
        Tk.mainloop
    end

    def update(time)
        @label.text format("%02d:%02d", time.to_i, (time-time.to_i)*100)
    end
end

WatchWindow.new
