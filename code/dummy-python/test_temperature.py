import nose
import temperature

def test_to_celsius():
    '''test freezing point'''
    assert temperature.to_celsius(32) == 0

def test_100():
    '''test 100 f'''
    assert temperature.to_celsius(100) == 37.7

if __name__ == '__main__':
    nose.runmodule()
