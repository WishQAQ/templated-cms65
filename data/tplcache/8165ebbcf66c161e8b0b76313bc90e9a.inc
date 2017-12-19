<li class="{dede:field.currentstyle/}">
          <div class="navf"><a href="{dede:field name='typeurl'/}" title=""> <span class="navcurbg"></span> <span class="navcur">{dede:field name='typename'/}</span> <span class="navon">{dede:field name='typenameen'/}</span> </a></div>
          <div class="nav-son">
            <ul>
              {dede:channel type='son' noself='yes' }
              <li><a href="[field:typelink/]" title="[field:typename/]">[field:typename/]</a></li>
              {/dede:channel}
            </ul>
          </div>
        </li>